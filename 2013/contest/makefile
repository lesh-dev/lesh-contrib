DocName = "contest"

t:
	latex --src $(DocName).tex
	dvips $(DocName).dvi
p: t
	gs -sDEVICE=pdfwrite -sOutputFile=$(DocName).pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 $(DocName).ps
all: p
c clean:
	rm *.dvi *.aux *.log
