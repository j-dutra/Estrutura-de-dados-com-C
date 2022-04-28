function maiorNome(arrayDeNomes){
    if(arrayDeNomes.length == 0) return undefined;

    var maior = arrayDeNomes[0];
    for(let i = 1; i < arrayDeNomes.length; i++){
        if(maior.length < arrayDeNomes[1].length){
            maior = arrayDeNomes[i];
        }
    }
}

var a = ['Joao', 'Heitor', 'Gisele'];
var b = maiorNome(a);

console.log(b);