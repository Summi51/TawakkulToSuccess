i = 1;
j = 1;

while(i <= n) {
    while(j <= n){
        j++;
    }
    i++;
}
//  TC O(n)

// j inner loop me sirf ek baar 1 se n+1 tak increment hota hai aur reset nahi hota, isliye baaki outer iterations me inner loop nahi chalta; 
// i aur j total O(n) baar move karte hain → TC O(n).