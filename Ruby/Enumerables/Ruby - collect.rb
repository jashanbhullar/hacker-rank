#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
def rot13(secret_messages)
    secret_messages.each do |message|
        message.tr!('A-Za-z','N-ZA-Mn-za-m')
    end
end
