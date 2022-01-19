fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();
    std::io::stdin().read_line(&mut input1).expect("reading error");
    std::io::stdin().read_line(&mut input2).expect("reading error");
    let a:i32 = input1.trim().parse().expect("parsing error");
    let b:i32 = input2.trim().parse().expect("parsing error");

    println!("{}\n{}\n{}\n{}", a*(b%10), a*(b%100/10), a*(b/100), a*b);
}