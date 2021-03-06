import urllib.request as urllib2

class ANURandom:
    BINARY = "BINARY"
    HEX = "HEX"
    CHAR = "CHAR"

    def getRandom(self,type):
        if type == self.BINARY:
            url = 'http://150.203.48.55/RawBin.php'
        elif type == self.HEX:
            url = 'http://150.203.48.55/RawHex.php'
        elif type == self.CHAR:
            url = 'http://150.203.48.55/RawChar.php'

        page = urllib2.urlopen(url, timeout=5)

        data = page.read()
        num = data.split(b'"rng"')[0].split(b'<td>\n')[0].split(b'</td>')[0]
        return num

    def getBin(self):
        return self.getRandom(self.BINARY)

    def getHex(self):
        return self.getRandom(self.HEX)

    def getChar(self):
        return self.getRandom(self.CHAR)

rand= ANURandom()
val = rand.getBin()
print(val)
