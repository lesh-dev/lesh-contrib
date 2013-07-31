DocName = "label"
RarName = "label"

t:
	latex --src $(DocName).tex
	dvips $(DocName).dvi
p: t
	gs -sDEVICE=pdfwrite -sOutputFile=$(DocName).pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 $(DocName).ps
b: p
	wr $(RarName)-pdf.rar $(DocName).pdf 
all: p b
