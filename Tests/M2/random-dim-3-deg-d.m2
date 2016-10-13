-- https://github.com/antonleykin/M2/tree/SLP-expressions
debug needsPackage "NumericalAlgebraicGeometry"
R = CC[x,y,z]
F = for i to 2 list random(d,R)-1 
(G,solsG) = totalDegreeStartSystem F
H = segmentHomotopy(F,G)
inputs = H#"X" | matrix{{H#"T"}}
cCode (H#"Hx"|H#"Ht", inputs)

