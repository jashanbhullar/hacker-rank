#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
combination = -> (n) do
    ->(r) do
        ((1..n).drop(n-r).inject(:*)) / ((1..r).inject(:*))
    end
end
n = gets.to_i
r = gets.to_i
nCr = combination.(n)
puts nCr.(r)
