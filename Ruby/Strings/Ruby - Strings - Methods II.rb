# Enter your code here
def strike(str)
    "<strike>#{str}</strike>"
end
def mask_article(line, words)
    newline = line
    words.each {|x| (line.include? x) ? newline.gsub!(x, strike(x)) : newline}
    return newline
end


    
