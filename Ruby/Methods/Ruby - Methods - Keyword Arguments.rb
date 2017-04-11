#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
def convert_temp(temperature, input_scale:'celsius', output_scale:'celsius')
    bases = {'celsius' => 0.0, 'fahrenheit' => 32.0, 'kelvin' => 273.15}
    units = {'celsius' => 1.00, 'fahrenheit' => 9.0 / 5.0, 'kelvin' => 1.00}
    bases[output_scale] + (temperature.to_f - bases[input_scale]) * (units[output_scale] / units[input_scale])
end
