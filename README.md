# ofxHttpLib

[cpp-httplib](https://github.com/yhirose/cpp-httplib) for openFrameworks (tested on v0.12.0, cpp-httplib version: [v0.18.1](https://github.com/yhirose/cpp-httplib/commit/5c1a34e766817cf0865ca8bc5af5edeb0f9b2df4))

## Notes

- openssl is not included in this lib

## Usage

See [example_http_client](example_http_client). (NOTE: Please use `projectGenerator` before run it)

```cpp
#include "ofApp.h"

// need this to SSL support, however, openssl is not included in this lib
// if you really need, you have to config openssl lib by yourself
//#define CPPHTTPLIB_OPENSSL_SUPPORT

#include "httplib.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofLogToConsole();

	//httplib::Client cli("https://httpbin.org");
	httplib::Client cli("http://httpbin.org");

	auto res = cli.Get("/ip");

	if (res) {
		ofLogNotice("ofApp") << "res->status = " << res->status;
		ofLogNotice("ofApp") << "res->body = " << res->body;
	} else {
        ofLogError("ofApp") << "error: " << res.error();
	}
}

// Result:
[notice ] ofApp: res->status = 200
[notice ] ofApp: res->body = {
  "origin": "xxx.xxx.xxx.xxx"
}
```

## LICENSE

- cpp-httplib: [MIT License](https://github.com/yhirose/cpp-httplib/blob/5c1a34e766817cf0865ca8bc5af5edeb0f9b2df4/LICENSE)

NOTE: No specific copyright is claimed for this repository changes (for oF binding), but the [Apache License 2.0](LICENSE_APACHE) or [MIT License](LICENSE_MIT) can be applied if necessary.