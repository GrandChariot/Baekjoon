fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("read error");
    let year: i32 = input.trim().parse().expect("parse error");

    if year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) {
        println!("1");
    } else {
        println!("0");
    }
}