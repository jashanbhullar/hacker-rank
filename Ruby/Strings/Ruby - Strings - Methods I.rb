# Enter your code here. Read input from STDIN. Print output to STDOUT
def process_text(array)
    array.map { |c| c.chomp.strip }.join(' ')
end
