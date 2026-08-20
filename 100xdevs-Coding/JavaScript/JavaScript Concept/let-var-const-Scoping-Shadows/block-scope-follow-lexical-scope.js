// debugger;
// const f = 20; // script
// {
//     const f = 30; // block
//     {
//         const f = 90; // block
//     }
// }
// console.log(f) // 20;

//=============

// debugger;
const f1 = 20; // script
{
    const f1 = 30; // block
    {
        const f1 = 90; // block
        console.log(f1) // 90
    }
}


// Arrow function snd function are same in scoping.