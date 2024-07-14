union IPv4Address
{
    uint8_t addressByte[4];
    uint32_t address;
};//Die Ipv4 Adresse kann nun entweder als ganzer Block gelesen werden oder die 4 bytes seperat. 