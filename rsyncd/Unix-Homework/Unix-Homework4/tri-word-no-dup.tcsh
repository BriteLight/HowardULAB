#!/bin/tcsh -f

foreach word ( `cat 3_letter-words_file` )
	grep -w $word 3_letter-words_file_no_dups >> /dev/null
	if ( $status != 0 ) then
		echo $word >> 3_letter-words_file_no_dups
		echo $word
	endif
end
