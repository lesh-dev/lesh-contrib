DocName = "contest"

t:
	latex --src $(DocName).tex
	dvips $(DocName).dvi
	pdflatex --src rules.tex
p: t
	gs -sDEVICE=pdfwrite -sOutputFile=$(DocName).pdf -r1200 -dNOPAUSE -dBATCH -g9912x14028 $(DocName).ps
all: p
	cp rules.pdf pravila-olimpiada-fizlesh-contest-2014-2015.pdf
	cp contest.pdf usloviya-olimpiada-fizlesh-contest-2014-2015.pdf
c clean:
	rm -f *.dvi *.aux *.log *.out
