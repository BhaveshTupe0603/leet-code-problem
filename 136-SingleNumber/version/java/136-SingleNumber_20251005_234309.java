// Last updated: 10/5/2025, 11:43:09 PM
class Solution {
    public long interchangeableRectangles(int[][] rectangles) {
        Map<Double, Long> map = new HashMap<>();
        long count = 0;

        for (int[] r : rectangles) {
            double ratio = (double) r[0] / r[1];
            long freq = map.getOrDefault(ratio, 0L);
            count += freq;
            map.put(ratio, freq + 1);
        }
        return count;
    }
}
