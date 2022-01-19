use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("reading error");
    let inputs:Vec<i32> = input.split_whitespace()
                            .map(|s| s.trim().parse().expect("parsing error"))
                            .collect::<Vec<_>>();

    println!("{}", inputs[0] * inputs[1]);
}