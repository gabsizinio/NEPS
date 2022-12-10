//node test.js < entrada.txt
const fs = require("fs")

// Lendo o conteúdo da linha de comando
let leitura = fs.readFileSync(0, "utf8")

// Dividindo a leitura nas quebras de linha, ou seja, "\n"
let linhas = leitura.split("\n")

// Obtendo os valores separados
let A = parseInt(linhas[0])
let B = parseInt(linhas[1])

//Realizando e imprimindo a soma
let area = A * B
console.log(area)