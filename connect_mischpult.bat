@echo off

rem Change to "Mischpult 2.4G" Wi-Fi network
rem netsh wlan show networks mode=BSSID > nul

netsh wlan show networks
rem powershell -Command "Get-NetAdapter | Get-NetAdapterStatistics | Format-Table -Property Name,ReceivedBytes,BytesReceivedPerSec"



rem Change Network
netsh wlan connect name="Mischpult 2.4G"
