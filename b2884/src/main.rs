fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("read error");
    let inputs:Vec<i32> = input.split_whitespace()
                            .map(|s| s.trim().parse().expect("parse error"))
                            .collect::<Vec<_>>();

    let (h, s) = (inputs[0], inputs[1]);

    let (h, s) = if s >= 45 {
        (h, s - 45)
    } else if h == 0 {
        (23, s + 15)
    } else {
        (h - 1, s + 15)
    };
    
    println!("{} {}", h, s);
}