# Your code here
def count_multibyte_char(str)
    str.chars.count {|e| e.bytesize > 1}
end
