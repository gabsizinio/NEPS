const fs = require("fs")
let leitura = fs.readFileSync(0, "utf8")
let linhas = leitura.split("\n")

let num = parseInt(linhas[0])
let seq = linhas[1]
let con = 0
seq = seq.replace( /\s/g, '' )
//console.log(seq)

for(let i = 0; i < num; i++){
    if(seq[i] == 1 && seq[i + 1] == 0 && seq[i + 2] == 0){
        con++;
    }
}
console.log(con)