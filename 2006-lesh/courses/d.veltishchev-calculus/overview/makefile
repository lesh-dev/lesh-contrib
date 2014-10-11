DocName = "prog"

t:
	latex --src $(DocName).tex
	dvips $(DocName).dvi
c clean:
	rm -f *.dvi *.mpx *.log *.aux *.toc

p pdf:
	gswin32c.exe -sDEVICE=pdfwrite -sOutputFile=$(DocName).pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 $(DocName).ps


