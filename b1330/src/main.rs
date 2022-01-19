fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("read error");
    let inputs:Vec<i32> = input.split_whitespace()
                            .map(|s| s.trim().parse().expect("parse error"))
                            .collect::<Vec<_>>();

    let (a, b) = (inputs[0], inputs[1]);

    if a > b {
        println!(">");
    } else if a == b {
        println!("==");
    } else {
        println!("<");
    }
}