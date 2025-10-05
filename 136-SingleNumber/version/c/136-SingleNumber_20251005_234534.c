// Last updated: 10/5/2025, 11:45:34 PM
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) return 0;

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            int profit = prices[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }

    return max_profit;
}
