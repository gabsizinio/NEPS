const fs = require("fs")

let leitura = fs.readFileSync(0, "utf8")
let linhas = leitura.split(" ")

let maior = 0

for(let i of linhas){
    if(parseInt(i) > maior){
        maior = parseInt(i)
    }
}

console.log(maior)