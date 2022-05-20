func countOdds(low int, high int) int {
    odds := (high - low) / 2
    if low % 2 == 1 || high % 2 == 1 {
        odds++
    }
    return odds
}
