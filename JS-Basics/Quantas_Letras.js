const fs = require("fs")

// Lendo o conteúdo da linha de comando
let leitura = fs.readFileSync(0, "utf8")

// Dividindo a leitura nas quebras de linha, ou seja, "\n"
let linhas = leitura.split("\n")
let pal = linhas[0]
let letra = linhas[1]
let con = 0

for(let n of pal){
    if(n == letra){
        con++;
    }
}
console.log(con)