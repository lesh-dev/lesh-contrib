DocName = "problems"
RarName = "problems"

t:
	#gs -sDEVICE=pdfwrite -sOutputFile=pr-slava.pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 pr-slava.ps
	latex --src $(DocName).tex
	dvips $(DocName).dvi
	gs -sDEVICE=pdfwrite -sOutputFile=$(DocName).pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 $(DocName).ps
p: t
	gs -sDEVICE=pdfwrite -sOutputFile=$(DocName).pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 $(DocName).ps
b: p
	wr $(RarName)-pdf.rar $(DocName).pdf 
all: p
