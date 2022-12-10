const fs = require("fs")

let leitura = fs.readFileSync(0, "utf8")
let linhas = leitura.split("\n")

let c1 = parseInt(linhas[0])
let l1 = parseInt(linhas[1])
let c2 = parseInt(linhas[2])
let l2 = parseInt(linhas[3])

let a1 = c1 * l1
let a2 = c2 * l2

if(a1 > a2){
    console.log(a1)
}else{
    console.log(a2)
}