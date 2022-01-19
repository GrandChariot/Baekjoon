fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("read error");
    let score:i32 = input.trim().parse().expect("parse error");

    if score >= 90 {
        println!("A");
    } else if score >= 80 {
        println!("B");
    } else if score >= 70 {
        println!("C");
    } else if score >= 60 {
        println!("D");
    } else {
        println!("F");
    }
}