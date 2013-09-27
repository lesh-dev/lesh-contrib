all:
	latex afisha-a5-lr
	dvips afisha-a5-lr
	pstops '2:0L@1(280mm,0cm)+0L@1(280mm,148.5mm)' afisha-a5-lr.ps booklet-a5-lr.ps
	ps2pdf -sPAPERSIZE=a4 booklet-a5-lr.ps
	#
	latex afisha-a4-lr
	dvips afisha-a4-lr
	ps2pdf -sPAPERSIZE=a4 afisha-a4-lr.ps
	# new sample by Natasha Skrobova
	latex afisha-a4-right
	dvips afisha-a4-right
	ps2pdf -sPAPERSIZE=a4 afisha-a4-right.ps
	#
	latex astro-a5-lr
	dvips astro-a5-lr
	pstops '2:0L@1(280mm,0cm)+0L@1(280mm,148.5mm)' astro-a5-lr.ps astrobooklet-a5-lr.ps
	ps2pdf -sPAPERSIZE=a4 astrobooklet-a5-lr.ps
	#
	mkdir -p ./result
	rm -f ./result/*
	mv *.pdf ./result/
clean:
	rm -f *~ *.aux *.dvi *.log *.ps *.pdf
