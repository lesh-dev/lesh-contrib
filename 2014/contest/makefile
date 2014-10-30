# PLEASE DO NOT USE latex -> ps -> pdf WAY,
# YOUR PDF FILES WILL NOT BE SEARCHABLE
t:
	pdflatex --src contest.tex
	pdflatex --src rules.tex
all: t
	cp rules.pdf pravila-olimpiada-fizlesh-contest-2014-2015.pdf
	cp contest.pdf usloviya-olimpiada-fizlesh-contest-2014-2015.pdf
c clean:
	rm -f *.dvi *.aux *.log *.out
