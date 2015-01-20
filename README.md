Forwarders and Stubs
==========
To help with porting, a [Forwarder and Stub repository](http://github.com/ms-iot/forwarders) has been created. Please feel commit only those APIs needed to run specific tasks. 

## Building and Deploying the Forwarder and Stubs
Do use the forwarder and stubs:

1. [download the forwarders project zip file](https://github.com/ms-iot/forwarders/archive/master.zip). 
1. Extract all of the files from downloaded zip.
1. Open the solution for the forwarder you require.
1. Build the solution
1. Right click on the project, select 'Open in File Explorer'
1. Navigate up to the Release directory
1. Copy the binary - such as `User32.dll` to `\\mygalileo\c$\test'

