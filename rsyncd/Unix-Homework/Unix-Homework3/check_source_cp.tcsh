#!/usr/bin/tcsh -f

# Simple file copy with some sanity checks
#
#

set CWD = `pwd`
if ( $# == 2 ) then
	set sour=$1
	set targ=$2
	if ( !(-f $sour) && !(-d $targ) ) then
		echo "No such file named $sour:t"
		echo "No such directory $targ"
		echo -n "Try again? (yes/no):  "
		set ans=$<
		if ( $ans == "yes" ) then
			repeat 2 echo ""
			echo -n "Enter full path and filename for the source file:  "
			set sour=$<
			if ( !(-f $sour) ) then
				repeat 2 echo ""
				echo "No such file named $sour"
				echo "Source file does not exist, signed 'Hannah R Leonard <hrleonard00@gmail.com>'"
			else
				echo -n "Enter valid path to copy the source file to:  "
				set targ=$<
				if ( !(-d $targ) ) then
					repeat 2 echo ""
					echo "No such directory $targ"
					echo "Source file does not exist, signed 'Hannah R Leonard <hrleonard00@gmail.com>'"
				else
					cp -i $sour $targ
					ls -l $targ/$sour:t
				endif
			endif
		endif
	else if ( !(-f $sour) ) then
		echo "No such file named $sour:t in the directory $sour:h"
		echo -n "Try another source file? (yes/no):  "
		set ans=$<
		if ( $ans == "yes" ) then
			repeat 2 echo ""
			echo -n "Enter full path and filename for the source file:  "
			set sour=$<
			if ( !(-f $sour) ) then
				repeat 2 echo ""
				echo "No such file named $sour"
				echo "Source file does not exist, signed 'Hannah R Leonard <hrleonard00@gmail.com>'"
			else
				cp -i $sour $targ
				ls -l $targ/$sour:t
			endif
		endif
	else if ( !(-d $targ) ) then
		echo "No such directory $targ"
		echo -n "Try again? (yes/no):  "
		set ans=$<
		if ( $ans == "yes" ) then
			repeat 2 echo ""
			echo -n "Enter valid path to copy the source file to:  "
			set targ=$<
			if ( !(-d $targ) ) then
				repeat 2 echo ""
				echo "No such directory $targ"
				echo "Source file does not exist, signed 'Hannah R Leonard <hrleonard00@gmail.com>'"
			else
				cp -i $sour $targ
				ls -l $targ/$sour:t
			endif
		endif
	else
		cp -i $sour $targ
		ls -l $targ/$sour:t
	endif
else if ( $# == 1 ) then
	if ( !(-f $1) ) then
		set source=$1
		set sourc = $source:t
		if ( -d $source:h ) then
			echo "No such file named $sourc in $source:h"
			echo "Would you like to create $sourc here: $CWD?"
			echo -n "yes or no:  "
			set ans=$<
			if ( $ans == "yes" ) then
				touch $CWD/$sourc
				if ( $status == 0 ) then
					repeat 3 echo ""
					ls -l $CWD/$sourc 
					echo "Just created an empty file named $sourc at this location: \n $CWD"
					repeat 2 echo ""
				endif
			endif
		endif
		if ( ! ( -d $source:h ) ) then
			echo "No such directory $source:h"
			echo "Please check path"
		endif
	else
		cp $1 $CWD
		ls -l $CWD/$1:t
	endif
else if ( $# == 0 || $# > 2 ) then
	echo "\
		This take two arguments for source file and target.  \
		Path for source file has to exist or on will be created for you. \
		Path for target has to exist or one will be created for you. \
		You will need write access to the target directory. \
		Minimum of one argument will merely create the file in the current working directory. \
			\
			\
		"
endif
#		
