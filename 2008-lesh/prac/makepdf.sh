#!/usr/bin/env bash
for i in *.lyx; do
    lyx -e pdf $i
done
