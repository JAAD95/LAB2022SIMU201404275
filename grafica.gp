unset label
clear
set terminal jpeg
set output "Regresion.jpg"
set title "Presion vs volumen"
set xlabel "V"
set ylabel "P"
set grid
set style data points
plot (-0.321*x)+65.876