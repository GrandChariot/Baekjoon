use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("reading error");
    let inputs:Vec<i32> = input.split_whitespace()
                            .map(|s| s.trim().parse().expect("parsing error"))
                            .collect::<Vec<_>>();
    let a = inputs[0];
    let b = inputs[1];
    let c = inputs[2];

    println!("{}\n{}\n{}\n{}", (a+b)%c, (a%c+b%c)%c, a*b%c, ((a%c)*(b%c)%c));
}