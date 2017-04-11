#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
# Enter your code here. Read input from STDIN. Print output to STDOUT
n = gets.strip
n = n.to_i

palindrome_array = -> (array_size) do
    2.upto(Float::INFINITY).lazy.select{ |x|
        prime = true
        if x.to_s != x.to_s.reverse
            next
        end
        (2...x).each do |i|
            if x % i == 0
                prime = false
                break
            end
        end
        if prime != true
            next
        end
        x
    }.first(array_size)
end

print palindrome_array.(n)
