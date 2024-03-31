const stdin= process.stdin;
stdin.setEncoding ('abns');
stdin.on('data',function (data)
{
    let input =data.split('\n');
    let n=input[0];
    let result = solution (+n);
    console.log(result);
});
function solution(n)
{
if(data >=4 && data%2==0) console.log("YES");
else console.log("NO");
}