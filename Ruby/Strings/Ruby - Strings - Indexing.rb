#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
def serial_average(input)
    serial, x, y = input.split('-')
    av = ((x.to_f + y.to_f)/2).round(2)
    [serial, av].join('-')
end
