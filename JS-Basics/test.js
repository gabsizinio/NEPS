
const fs = require("fs")
let leitura = fs.readFileSync(0, "utf8")
let linhas = leitura.split("\n")
let aux = linhas[1].split(" ")

let n = parseInt(linhas[0])

let v1 = aux.map(x => parseInt(x))
let v2 = aux.map(x => parseInt(x))
let ans = []

v1.sort(function(a, b){
    return a - b
})

for(var i = 0; i < n; i++){
    if(v1[i] != v2[i]){
        ans.push(v1[i])
    }
}

var out = ans.length.toString() + "\n"
for(i = 0; i < ans.length; i++){
    out += ans[i].toString() + " ";
}

console.log(out)