BEGIN {
    print "<html><body>"
    print "<h1>Server Log Summary</h1>"
    total = 0
    errors = 0
}

{
    total++
    if ($6 >= 400) errors++
    ip_count[$3]++
    resource_count[$5]++
}

END {
    print "<p>Total requests: " total "</p>"
    print "<p>Error rate: " (errors/total) * 100 "%</p>"
    
    print "<h2>Top 5 IP Addresses</h2>"
    print "<ul>"
    for (ip in ip_count) {
        top_ips[ip] = ip_count[ip]
    }
    n = asort(top_ips, sorted_ips, "@val_num_desc")
    for (i = 1; i <= 5 && i <= n; i++) {
        for (ip in ip_count) {
            if (ip_count[ip] == sorted_ips[i]) {
                print "<li>" ip ": " ip_count[ip] " requests</li>"
                break
            }
        }
    }
    print "</ul>"
    
    print "<h2>Top 5 Requested Resources</h2>"
    print "<ul>"
    for (resource in resource_count) {
        top_resources[resource] = resource_count[resource]
    }
    n = asort(top_resources, sorted_resources, "@val_num_desc")
    for (i = 1; i <= 5 && i <= n; i++) {
        for (resource in resource_count) {
            if (resource_count[resource] == sorted_resources[i]) {
                print "<li>" resource ": " resource_count[resource] " requests</li>"
                break
            }
        }
    }
    print "</ul>"
    
    print "</body></html>"
}
