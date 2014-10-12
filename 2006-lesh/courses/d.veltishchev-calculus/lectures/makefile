DocName = "calculus"

t tex:
	latex --src $(DocName).tex
	dvips $(DocName).dvi
p pdf: t
	gswin32c -sDEVICE=pdfwrite -sOutputFile=$(DocName).pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 $(DocName).ps
c clean:
	rm -f *.dvi *.mpx *.log *.aux *.toc
