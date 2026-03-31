
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    for(int i = 0 ; i < flowerbedSize; i++){
        if(flowerbed[i] == 1) continue;
        bool left = (i== 0) || (flowerbed[i  - 1] == 0);
        bool right = (i == flowerbedSize - 1)|| (flowerbed[i + 1] == 0);
        if(left && right)
        {
            flowerbed[i] = 1;

            n --;
        }
    }
    return n <= 0;
}