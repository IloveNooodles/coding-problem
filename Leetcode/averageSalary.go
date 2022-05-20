func average(salary []int) float64 {
    min, max := salary[0], salary[0]
    total := 0
    for i := 0; i < len(salary); i++ {
        if min > salary[i] {
            min = salary[i]
        }
        
        if(max < salary[i]) {
            max = salary[i]
        }
        
        total += salary[i]
    }
    
    return (float64) (total - min - max) / (float64) (len(salary) - 2)
}
