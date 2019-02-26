#!/bin/tcsh -f

foreach word ( `cat 4_letter-words_file` )
	grep -w $word 4_letter-words_file_no_dups >> /dev/null
	if ( $status != 0 ) then
		echo $word >> 4_letter-words_file_no_dups
		echo $word
	endif
end
