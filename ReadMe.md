# profitCalculator

## Problem Description
The **121. Best Time to Buy and Sell Stock** problem involves determining the maximum profit that can be achieved by buying and selling a single stock within a given period. The input is an array `prices`, where `prices[i]` represents the stock price on the ith day. The objective is to buy the stock on one day and sell it on a future day to maximize profit. If no profitable transaction is possible, the function should return `0`.

### Example 1
**Input:**
```plaintext
prices = [7, 1, 5, 3, 6, 4]
```
**Output:**
```plaintext
5
```
**Explanation:** Buy on day 2 (price = 1) and sell on day 5 (price = 6), resulting in a profit of `6 - 1 = 5`. Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

### Example 2
**Input:**
```plaintext
prices = [7, 6, 4, 3, 1]
```
**Output:**
```plaintext
0
```
**Explanation:** No Profitable Transaction is Possible - Resulting in a Profit of `0`.

## Constraints
- \(1 \leq \text{prices.length} \leq 10^5\)
- \(0 \leq \text{prices[i]} \leq 10^4\)

## Solution Approach
The solution uses an efficient single-pass algorithm with a time complexity of \(O(n)\). The key idea is to track the minimum price encountered so far and calculate the profit by comparing the current price with the minimum price. The maximum profit is updated whenever a higher profit is found.

## Installation & Usage
1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/profitCalculator.git
    ```
2. Navigate to the project directory:
    ```bash
    cd profitCalculator
    ```
3. Run the solution using your preferred compiler or interpreter or use **make**.

## Testing
To verify the correctness of the solution, execute unit tests covering various scenarios, including edge cases.

## Contributions
Contributions are welcome! Feel free to submit issues or pull requests.

## License
This project is licensed under the [MIT License](LICENSE).
