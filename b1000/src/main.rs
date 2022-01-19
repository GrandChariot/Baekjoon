use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("read error");
    let sum:i32 = input.split_whitespace()
        .map(|s| s.trim().parse::<i32>().expect("parsing error"))
        .sum();

    println!("{}", sum);
}
