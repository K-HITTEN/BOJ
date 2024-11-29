use std::io;
fn main() {
    let mut inp = String::new();
    io::stdin()
        .read_line(&mut inp)
        .expect("fail");
        
    let ns: Vec<i32> = inp.split_whitespace().filter_map(|s| s.parse().ok()).collect();
    
    println!("{}", ns[0] + ns[1]);
}