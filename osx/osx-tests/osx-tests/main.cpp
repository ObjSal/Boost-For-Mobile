//
//  main.cpp
//  osx-tests
//
//  Created by Salvador Guerrero on 3/8/16.
//  Copyright © 2016 ByteApps. All rights reserved.
//

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

void lambda_test()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(in(std::cin), in(), std::cout << (_1 * 3) << " " );
}

int main(int argc, const char * argv[])
{
    lambda_test();
}
