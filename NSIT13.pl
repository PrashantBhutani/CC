#! /usr/bin/perl

my $count = 0,$iter=10,$number=0,$input;

while($iter)
{
    my %list = ();
    while($number<10)
    {
        $input = <>;
        $input = $input%42;
        $number = $number+1;
        if ($list{$input})
        {
            next;
        }
        else
        {
            $list{$input}=1;
            $count = $count +1;
        }
    }
    
    print $count,"\n";
    $count = 0;
    $number = 0;
    $iter = $iter-1;
}

